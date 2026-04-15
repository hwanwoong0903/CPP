#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define MAXWORDS 100

struct wordpair {
    string eng;
    string kor;
};

class MyDic {
    wordpair words[MAXWORDS]; // 저장된 단어 배열
    int nWords; // 현재 등록된 단어의 수

public:
    // 생성자
    MyDic() { nWords = 0; }

    // 단어 추가
    inline void add(string eng, string kor) {
        if (nWords < MAXWORDS) {
            words[nWords].eng = eng;
            words[nWords].kor = kor;
            nWords++;
        }
    }

    // 파일에서 단어 읽기
    inline void load(string filename) {
        ifstream in(filename);
        if (!in) return;

        nWords = 0;
        while (in >> words[nWords].eng >> words[nWords].kor) {
            nWords++;
            if (nWords >= MAXWORDS) break;
        }
        in.close();
    }

    // 파일에 단어 저장
    inline void store(string filename) {
        ofstream out(filename);
        for (int i = 0; i < nWords; i++) {
            out << words[i].eng << " " << words[i].kor << endl;
        }
        out.close();
    }

    // 전체 출력
    inline void print() {
        for (int i = 0; i < nWords; i++) {
            cout << i << ": " 
                 << words[i].eng << " - " 
                 << words[i].kor << endl;
        }
    }

    // 영어 반환
    inline string getEng(int id) {
        if (id >= 0 && id < nWords)
            return words[id].eng;
        return "";
    }

    // 한글 반환
    inline string getKor(int id) {
        if (id >= 0 && id < nWords)
            return words[id].kor;
        return "";
    }
};

int main() {
    MyDic dic;

    dic.add("apple", "사과");
    dic.add("banana", "바나나");

    dic.print();

    dic.store("dic.txt");
    dic.load("dic.txt");
    return 0;
}
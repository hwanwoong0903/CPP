-----------------------------
|          MyTime           |
-----------------------------
| - day  : int             |
| - hour : int             |
| - min  : int             |
| - sec  : int             |
-----------------------------
| + MyTime(d:int,h:int,m:int,s:int) |
| + convert(duration: double) : void |
| + print() : void                 |
| + add(t: MyTime) : MyTime       |
| + reset() : void                |
-----------------------------

// 클래스에서는 포인터 덕분에 객체를 따로 전달할 필요가 없어져서 함수가 더 간결하고 효율적으로 바뀐다
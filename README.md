# C言語によるソートアルゴリズム比較プログラム

このプログラムは、複数のソートアルゴリズムを比較することを目的として作成されました。

## ファイル構成

```
.
├── .gitignore
├── Makefile
├── README.md
├── a.out
├── include
│   ├── ACN_types.h
│   └── sort_util.h
├── sort.bin
├── src
│   ├── main.c
│   ├── main.o
│   ├── sort
│   │   ├── bogo.c
│   │   ├── bogo.o
│   │   ├── bubble.c
│   │   ├── bubble.o
│   │   ├── quick.c
│   │   ├── quick.o
│   │   ├── stalin.c
│   │   └── stalin.o
│   ├── sort_util.c
│   └── sort_util.o
└── test.c

4 directories, 20 files
```

# ビルド方法

```
make
```

または手動でコンパイルする場合

```
gcc -Wall -Wextra -Werror -std=c99 -o sort main.c sort_util.c
```

実行方法
```
./sort.bin
```


# コンパイラとオプション
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror -std=c99 -Iinclude

# ソースファイルとオブジェクトファイル
SRC_DIR     = src
SORT_DIR    = $(SRC_DIR)/sort

SRCS    = $(SRC_DIR)/main.c \
          $(SRC_DIR)/sort_util.c \
          $(SORT_DIR)/bogo.c \
          # $(SORT_DIR)/bubble.c \
          # $(SORT_DIR)/quick.c

OBJS    = $(SRCS:.c=.o)

# 実行ファイル名
TARGET  = bogo_sort

# ルール定義
.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

# 依存するヘッダファイルの記述（オプション）
$(SRC_DIR)/main.o: include/ACN_types.h include/sort_util.h
$(SRC_DIR)/sort_util.o: include/ACN_types.h include/sort_util.h
$(SORT_DIR)/bogo.o: include/ACN_types.h include/sort_util.h

# クリーン
clean:
	rm -f $(OBJS) $(TARGET)

# directory設定
SRC_DIR = src
INCLUDE_DIR = include
OBJ_DIR = obj
DBG_DIR = debug
BIN_DIR = bin

# ソースファイル
## IGNORE_SRCで指定したファイル以外の[xxx.c]をコンパイル
IGNORE_SRC = $(SRC_DIR)/ignore_file.c
SRCS = $(filter-out $(IGNORE),$(wildcard $(SRC_DIR)/*.c))
OBJS = $(subst $(SRC_DIR),$(OBJ_DIR),$(SRCS:.c=.o))
OBJS_DEBUG = $(subst $(SRC_DIR),$(DBG_DIR),$(SRCS:.c=.o))

# 出力ファイル名
TARGET_NAME = main.out
TARGET = $(BIN_DIR)/$(TARGET_NAME)
TARGET_DEBUG = $(DBG_DIR)/$(TARGET_NAME)

# コンパイラ設定
## gcc or g++
CC = gcc

## コンパイルフラグ
CFLAGS =  -Wall -I$(INCLUDE_DIR)
DBGCFLAGS = -g -Wall -I$(INCLUDE_DIR)

# default rule
default: makedir all foot_print

# non-phony targets
## release ビルド
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) 

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

## debug ビルド
$(TARGET_DEBUG): $(OBJS_DEBUG)
	$(CC) $(DBGCFLAGS) -o $@ $(OBJS_DEBUG)

$(DBG_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(DBGCFLAGS) -c -o $@ $<

# 設定の表示 
foot_print: 
	@echo "*** Finish make ***" 

# phony rules 
# releaseビルド 
.PHONY: all 
all: $(TARGET) 

# debugビルド 
.PHONY: debug 
debug: makedir $(TARGET_DEBUG) foot_print 

# ディレクトリ作成 
.PHONY: makedir 
makedir: 
	@mkdir -p $(BIN_DIR) $(OBJ_DIR) $(DBG_DIR) 

# clean .PHONY: clean 
clean: 
	rm -f $(OBJS) $(OBJ_DEBUG) $(TARGET) $(TARGET_DEBUG)
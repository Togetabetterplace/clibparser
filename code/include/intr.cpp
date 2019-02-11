//
// Project: clibparser
// Created by bajdcc
//

// 中断表（本文件可不包含，只为了说明）

enum INTR_TABLE {
    INTR_PUT_CHAR = 0,
    INTR_PUT_NUMBER = 1,
    INTR_PUT_HEX = 2,
    INTR_DEBUG = 3,
    INTR_PUT_FLOAT = 4,
    INTR_HOSTNAME = 5,
    INTR_PUT_DOUBLE = 6,
    INTR_PUT_LONG = 7,
    INTR_INPUT_LOCK = 10,
    INTR_INPUT_CHAR = 11,
    INTR_INPUT_STOP = 12,
    INTR_INPUT_STATE = 13,
    INTR_RESIZE = 20,
    INTR_MALLOC = 30,
    INTR_FREE = 31,
    INTR_PID = 50,
    INTR_PUT_EXEC_FILE = 51,
    INTR_PUT_EXEC_WAIT = 52,
    INTR_PUT_EXEC_SLEEP = 53,
    INTR_PUT_EXEC_WAKEUP = 54,
    INTR_PUT_FORK = 55,
    INTR_PUT_IO_CONNECT = 56,
    INTR_PUT_KILL_CHILDREN = 57,
    INTR_SWITCH_TASK = 58,
    INTR_SET_CYCLE = 59,
    INTR_FS_GET_PWD = 60,
    INTR_FS_GET_USER = 61,
    INTR_FS_CD = 62,
    INTR_FS_MKDIR = 63,
    INTR_FS_TOUCH = 64,
    INTR_FS_OPEN = 65,
    INTR_FS_READ = 66,
    INTR_FS_CLOSE = 67,
    INTR_FS_RM = 68,
    INTR_FS_WRITE = 69,
    INTR_SLEEP_RECORD = 100,
    INTR_SLEEP_REACH = 101,
    INTR_TIMESTAMP = 102,
    // MATH
    INTR_MATH_SQRT = 201,
};

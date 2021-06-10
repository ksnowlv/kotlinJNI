

LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := JNIPerson
LOCAL_SRC_FILES := JNIPerson.c Person.cpp  PersonExtension.cpp
LOCAL_LDLIBS:=-L$(SYSROOT)/usr/lib -llog

include $(BUILD_SHARED_LIBRARY)


APP_STL = c++_static
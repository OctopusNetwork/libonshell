rootdir := $(shell pwd)/../../..
project := ubuntu-base

include $(rootdir)/build/common/inc.mk
ifeq ($(hostmaketype), windows)
rootdir := ../../..
endif

TARGETSPEC = libonshell
TARGET_LIB = libonshell.$(staticlibsuffix)
MODULE = libonshell
MODULEVERSION = 0.0.1

include ../source.mk
include $(rootdir)/build/utils/archive.$(hostmaketype).mk

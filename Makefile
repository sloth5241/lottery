OBJECTS = randNumber.o bubbleSort.o lottery.o 
XX = g++
CFLAGS = -Wall -O

lottery:$(OBJECTS)
	$(XX) $(OBJECTS) -o lottery;
randNumber.o:	
	$(XX) $(CFLAGS) -c randNumber.cpp -o randNumber.o;
bubbleSort.o:	
	$(XX) $(CFLAGS) -c bubbleSort.cpp -o bubbleSort.o;
lottery.o:
	$(XX) $(CFLAGS) -c lottery.cpp -o lottery.o;

.PHONY : clean
clean :
	@echo 正在清除文件;
	-rm -rf *.o lottery;

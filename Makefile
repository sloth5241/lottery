OBJECTS = randNumber.o bubbleSort.o lottery.o 
XX = g++
CFLAGS = -Wall -O

newTest:$(OBJECTS)
	$(XX) $(OBJECTS) -o newTest;
randNumber.o:	
	$(XX) $(CFLAGS) -c randNumber.cpp -o randNumber.o;
bubbleSort.o:	
	$(XX) $(CFLAGS) -c bubbleSort.cpp -o bubbleSort.o;
lottery.o:
	$(XX) $(CFLAGS) -c lottery.cpp -o lottery.o;

.PHONY : clean
clean :
	@echo 正在清除文件;
	-rm -rf *.o newTest;

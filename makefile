testmap: testmap.cpp map_template.h employee.h
	g++ -g -Wall $< -o $@
.PHONY: clean

clean:
	-rm testmap

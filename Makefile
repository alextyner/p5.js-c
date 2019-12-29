CC=em++
CFLAGS=-Wall --shell-file template.html

dist-web/index.html: dist-web main.cpp template.html
	$(CC) $(CFLAGS) *.cpp -o dist-web/index.html

dist-web:
	mkdir dist-web

template.html:
	echo "<!DOCTYPE html>\n<html>\n  <head>\n    <script src="https://cdn.jsdelivr.net/npm/p5@0.10.2/lib/p5.min.js"></script>\n  </head>\n  <body>\n    {{{ SCRIPT }}}\n  </body>\n</html>" >> template.html

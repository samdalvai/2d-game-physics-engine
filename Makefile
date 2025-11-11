build:
	g++ -std=c++17 -Wall \
	./src/*.cpp ./src/Physics/*.cpp \
	-lSDL2 -lSDL2_image -lSDL2_gfx -lm \
	-o app

build-apple-silicon:
	echo "Building app for MacOS apple silicon"
	g++ -std=c++17 -Wall \
	./src/*.cpp ./src/Physics/*.cpp \
	-I/opt/homebrew/include \
	-L/opt/homebrew/lib \
	-lSDL2 -lSDL2_image -lSDL2_gfx -lm \
	-o app

run:
	echo "Running the app"
	./app

clean:
	echo "Removing binaries"
	@rm -f app

make: dependencies/zycore/CMakeLists.txt
	@if ! command -v cmake &> /dev/null; then \
		echo "ERROR: cmake is not installed. Please install it first." >&2; \
	fi
	if [ ! -d "build" ]; then mkdir build; fi
	cd build && cmake .. && make -j$(nproc)

install: make
	cd build && make install

amalgamate:
	assets/amalgamate.py

clean:
	rm -rf build
	rm -rf doc
	rm -rf amalgamated-dist

test: make
	cd tests && ./regression.py test ../build/ZydisInfo
	cd tests && ./regression_encoder.py ../build/ZydisFuzz{ReEncoding,Encoder}

doc-plain:
	doxygen

doc-mcss:
	@if [ ! -d "../m.css" ]; then \
		git clone https://github.com/mosra/m.css.git ../m.css; \
	fi

	./m.css/documentation/doxygen.py Doxyfile-mcss

dependencies/zycore/CMakeLists.txt:
	git submodule update --init --recursive

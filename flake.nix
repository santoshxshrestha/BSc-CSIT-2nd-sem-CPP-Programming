{ pkgs ? import <nixpkgs> { } }:

pkgs.mkShell {
  strictDeps = true;

  nativeBuildInputs = [
    pkgs.gcc                # C++ compiler
    pkgs.gdb                # Debugger
    pkgs.pkg-config         # Dependency manager
    pkgs.cmake              # (optional) Build system
    pkgs.ninja              # (optional) Fast build tool
  ];

  buildInputs = [
    pkgs.libstdcxx          # Standard C++ library (usually already included with gcc)
  ];

  shellHook = ''
    echo "C++ dev shell with GCC ready."
    export CXX=g++
    export CC=gcc
  '';
}


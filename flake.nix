{
  description = "Clang Dev Shell with Libraries";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-24.05";

  outputs = { self, nixpkgs }: {
    devShells.x86_64-linux.default = let
      pkgs = import nixpkgs {
        system = "x86_64-linux";
      };
      llvm = pkgs.llvmPackages_19;
    in pkgs.mkShell.override {
      stdenv = llvm.stdenv;
    } {
      packages = [
        llvm.clang
        llvm.lldb
        llvm.clang-tools
        pkgs.cmake
        pkgs.bear

        llvm.libcxx
        llvm.libcxxabi
        llvm.compiler-rt

        # pkgs.zlib
        # pkgs.openssl
      ];

      shellHook = ''
        export CXX=clang++
        export CC=clang
        export LD=clang++
        echo " Clang  Dev Shell Ready"
        echo " Using libc++ from LLVM"
      '';
    };
  };
}


{
  description = "C++ DevShell";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs {
          inherit system;
        };
      in {
        devShells.default = pkgs.mkShell {
          name = "cpp-dev-shell";

          packages = with pkgs; [
            gcc             # GNU Compiler Collection (includes g++)
            # cmake           # Build system generator
            # gdb             # Debugger
            clang-tools     # Includes clangd, clang-format, etc.
            # valgrind        # Memory checker
            # cppcheck        # Static analysis
          ];

          shellHook = ''
            echo "in dev shell"
          '';
        };
      });
}

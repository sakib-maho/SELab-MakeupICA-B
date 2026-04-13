# SELab Makeup ICA B (Upgraded)

This repository now contains a structured C array utility project for software lab practice.
It replaces the previous single-file experiment with modular code, tests, and a repeatable build flow.

## Features

- Computes sum and average for CLI-provided numbers
- Modular reusable utility implementation
- Test executable for core functions
- `Makefile` with `build`, `test`, and `clean` targets

## Build

```bash
make build
```

## Run

```bash
./array_tool 2 4 6 8
```

## Test

```bash
make test
```

## License

MIT License. See `LICENSE`.

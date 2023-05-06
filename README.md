In this repository, you can execute programs introduced in the book "Operating Systems- Three Easy Pieces".

## How to run

1. Install [Docker](https://docs.docker.com/get-docker/).
2. Build or pull the docker image.
    - Build: `docker build -t shimizu517/os-three-easy-pieces .`
    - Pull: `docker pull shimizu517/os-three-easy-pieces`
3. Run the following command in the terminal.

```bash
docker run -it --rm -v $(pwd):/app shimizu517/os-three-easy-pieces bash
```

4. Run the following command in the container.

```bash
apt update && apt install -y gcc make gdb
```

6. Run the following command in the container.

```bash
cd /app/<directory name>
gcc -o out <file name>
./out
```

## References:

- Arpaci-Dusseau, R. H., &#38; Arpaci-Dusseau, A. C. (2018). *Operating systems: Three easy pieces.* Createspace
Independent Publishing Platform.


<!-- Banner -->
<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=venom&height=160&text=100%20Days%20of%20C&fontAlign=50&fontColor=ffffff&color=0:111827,100:0ea5e9" alt="banner"/>
</p>

<p align="center">
  <a href="https://github.com/vivaswann/100DaysofCode-VivaswanSingh/stargazers"><img alt="Stars" src="https://img.shields.io/github/stars/vivaswann/100DaysofCode-VivaswanSingh?style=for-the-badge"></a>
  <a href="https://github.com/vivaswann/100DaysofCode-VivaswanSingh/issues"><img alt="Issues" src="https://img.shields.io/github/issues/vivaswann/100DaysofCode-VivaswanSingh?style=for-the-badge"></a>
  <img alt="Language" src="https://img.shields.io/badge/C-100%25-0A7BC1?style=for-the-badge">
  <img alt="Commit activity" src="https://img.shields.io/github/commit-activity/m/vivaswann/100DaysofCode-VivaswanSingh?style=for-the-badge">
  <img alt="License" src="https://img.shields.io/github/license/vivaswann/100DaysofCode-VivaswanSingh?style=for-the-badge">
</p>

## 🔥 100 Days of C
Daily C practice—two problems a day when possible. Clean, simple, strictly typed.  
**Current streak:** `#100DaysOfCode` • **Road to Day 100** 🚀

**Progress**
[█████-----] 6% (6/100)

> P.S. “Teenw4ites” = me (alt).

---

## 📂 Structure
- `dayNN_q1.c` — problem 1 of the day  
- `dayNN_q2.c` — problem 2 of the day  
- `.vscode/` — tasks & build tweaks  
- `.github/workflows/` — CI to compile all C files (see below)

> Tip: Once days pile up, add folders: `day01/`, `day02/`, … each with a `README.md` describing inputs/outputs.

---

## 🧪 Run locally
```bash
# build all .c files into ./build
mkdir -p build
for f in *.c; do
  out="build/$(basename "${f%.c}")"
  gcc -std=c11 -Wall -Wextra -O2 "$f" -o "$out"
done
# run one
./build/day01_q1

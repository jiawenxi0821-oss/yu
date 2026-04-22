# 最少步数动态演示

这是一个用于展示“分支限界法 / 最少步数”题目的小项目。

项目包含两部分：

- `index.html`：网页动态演示版本，可以在棋盘上播放两匹棋子到 `(1,1)` 的最短路径。
- `solution.py`：Python 控制台解题程序，输入两组坐标后输出两行最少步数。
- `solution.cpp`：对应的 C++ 版本。

## 题目规则

在 `100 x 100` 的棋盘上，棋子可以用两种方式移动：

- `日` 字走法：`(±1, ±2)` 或 `(±2, ±1)`
- `田` 字走法：`(±2, ±2)`

给定两个起点 `A` 和 `B`，分别计算它们走到左上角 `(1,1)` 的最少步数。

## 网页演示

直接打开根目录下的 `index.html` 即可：

1. 输入黑马 A 和白马 B 的起点坐标
2. 点击“开始演示”
3. 页面会自动计算最短路径并动态展示移动过程

如果仓库启用了 GitHub Pages，也可以直接用浏览器访问网页版本。

## 运行 Python 程序

如果本机 Python 启动器不可用，可以直接运行：

```powershell
& "C:\ProgramData\Miniconda3\python.exe" .\solution.py
```

样例输入：

```text
12 16
18 10
```

样例输出：

```text
8
9
```

## 文件说明

- `index.html`：GitHub Pages 入口页
- `chess_demo.html`：同内容的原始演示页
- `solution.py`：Python 解法
- `solution.cpp`：C++ 解法
- `run_solution.bat`：Windows 下一键运行脚本

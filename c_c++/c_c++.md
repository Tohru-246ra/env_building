# C & C++ の環境構築を目指すメモ

### 手順

1.  DockerでUbuntuコンテナを作成
2.  gcc、g++ (それぞれC,C++用のコンパイラ) を インストール
```
apt update
apt install build-essential
```
3. Makefileや種々のディレクトリを作成
```
─┬─ Makefile
 ├─ bin         // バイナリファイル
 ├─ debug       // デバッグするファイル
 ├─ include     // ヘッダファイル
 ├─ obj         // オブジェクトファイル
 └─ src         // ソースコード
```
4. コマンドをうつ
```
make // releaseビルド
make debug // debugビルド
```

5. デバッグ & 実効 (実行ファイルへのpathをうつ)

参考</br>
https://qiita.com/nsd24/items/805d0b53c67a1043e819</br>
https://inno-tech-life.com/dev/cpp/start_dev_cpp/</br>
https://inno-tech-life.com/dev/cpp/cpp_debug_vscode/</br>
https://qiita.com/mizcii/items/cfbd2aa17f6b7517c37f</br>

gccについて</br>
http://se.eei.eng.osaka-u.ac.jp/eeise005/tani_prog/HOWTOprogC/compile.htm</br>

今後参考にできそう</br>
https://inno-tech-life.com/dev/linux/vscode_tasks/</br>







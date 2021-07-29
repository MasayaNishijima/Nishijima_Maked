# 過去に作成したものまとめ(2021年7月29日更新)

以下学業・趣味で印象に残っている技術を記録している。
末尾に触れたことのある技術を纏めている。


## 高専の授業・研究・課外活動で学習したもの
#### 情報セキュリティボランティア技術担当2021
フィッシング詐欺の脅威を市の職員の人へ伝える活動を下級生がおこなっており、卒業研究室の教授を経由で実演のために技術支援を求められ偽のフィッシング詐欺サイトの作成をしている。ウェブサイトの取得・改変、GASを利用したPOSTデータの受けとり、nginx(on Docker)を利用したWEBサーバー上での動作確認などを行なっている。
具体的には、
* Google ChromeでのHTML等のウェブページを構成するファイルを取得し、HTMLを改変しPSOTの送り先を変更する。
* GAS(Google Apps Script)上にJava scriptでGoogleスプレッシャーシートへ記述する。
* 改変したHTMLを公開するWebサーバをDockerを使いセットアップする、docker-compose.ymlを記述し他のボランティアメンバーのパソコンでも同様の環境を作り安くするための準備をする。
などのことを行ないました。


#### R言語(電気電子学生実験のデータ解析グラフ化)2020,2021 作成物当リポジトリで公開中
発電機や電動機、増幅回路の特性実験で得たデータをまとめたCSVファイルを、作成したRのスクリプトで処理しグラフ化した。
CSVファイルの読み込みPNG形式での出力、グラフにデータに沿った直線や曲線の加算、複数のデータを配列としてまとめて処理などを行った。
※Rのスクリプトはすべて個人で作成したが、実験データの値はグループで共同で取得したものを含む。

#### Armアセンブラ言語(ラズベリーパイ)2020 作成物当リポジトリで公開中
基本的な命令文や汎用レジスタ、スタックポインターなどの基本的な仕様の理解、ならびにGNU Debbuggerの使用方法の学習を行なった。
Armフォルダに作成したアセブラファイルをまとめています。簡単な算術処理、Printf関数の呼び出し、汎用レジスタをつかった関数へのデータの引き渡しなどのプログラムです。算術処理の結果等はr0レジスタに記録し、シェル上で
$$echo \$? $$
を実行することで直接確認してする。
また、printf関数を呼びだし、レジスタと引数の関係なども学習した。

#### C言語(コード解析)2016～2019 作成物当リポジトリで公開中VisualStudio 2017フォルダ
__2016年度から2017年度:__ Visual Studio Community 2015 2017を利用したC言語の学習
__2018年度:__ Linux上でのGCCコンパイラを利用したC言語の学習
__『C PUZZLE BOOK』__(Alan R. Feuer 1982)を利用した、コーディングより短いコードで高度な処理をおこなっているコードの解析などを行った。
例としては、同一ステートメント中にある各演算子の計算順序や、演算子ごとの優先度や左右どちらの処理が優先されるか。
短絡評価(short-circuit evaluation)と呼ばれる
>if(x==A){
        function();
} 

というコードはANDの論理演算子では左辺がTureでないと右辺が実行されないことを利用し
>x==A && function();

と圧縮できる仕組みなど。


## 2. 趣味で開発・作成したもの
#### 分散型SNS Mastodonのインスタンス(サーバー)の設置・利用 現在進行中
分散型SNSという中央の管理者が管理するサーバーではなく、誰でも自由にサーバーを設置して相互リンクされたSNSであるMastodonのサーバーを[公式手順](https://docs.joinmastodon.org/admin/install/)をもとに作成。今後アカウントの運用ならびに、APIを叩く、フロント・バックエンドかまわずオリジナルから改変して遊ぶ予定。
[作成したサーバー](https://nishimin.net/@admin)。~~サーバーの起動までは行なえているものの、一部のアクセスがSSL化できていないなどの問題が解消されていないため、アカウントの運用は行っていない。~~ サーバー稼働中、アカウント運用ともにサーバーの安定稼動のための調整段階。

#### MinecraftModサーバーの構築と運用2020
寮の友人数名に遊んで貰える用にConoha VPSを借りて、MinecraftというゲームのMODサーバー環境の構築と2ヶ月弱の運用を行いました。(現在は運用終了)

#### CUIチェットボットMecher(共同開発)2017-2018
[Githubリポジトリ](https://github.com/enTear/Project_Mecher/tree/%CE%B1_Version)ここで当時、学生寮でルームメイトだった学生と、コマンドプロンプト上で動くチャットボットのようなものを開発していました。地域別の天気の取得や、Wikipedia等の各サイトで検索と、ボットの発言を音声合成ソフトの棒読みちゃんで読み上げるなどの機能をもっています。
私は、関数名等の命名規則の作成と、音声合成ソフトの棒読みちゃんとの連動作業、検索サイトへのアクセスの一部などを担当しました。ただし、音声合成ソフトとの連動は汎用のコードを1つの関数にまとめただけです。



## 3. 触れたことのある言語・環境等まとめ
##### プログラミング言語
__好んで使用する言語:__ C言語, R言語

__使用経験のある言語__ C++, Python, Armアセンブラ言語, シェルスクリプト, バッチファイル

##### 開発環境
__OS:__ Windows10, Ubuntu (Desktop, Server), ElementaryOSなど

__エディタ:__ VS code, Sakuraエディタ, nanoエディタ

__日本語入力:__ SKK日本語入力FEP, Fcitx-SKK

__バージョン管理:__ GitHub

__実行環境:__ Docker, VM virtualBox, VMware Player, ConohaVPS

##### デザイン系(最低限の操作ができる程度)
__遷移図等の作成:__ Draw.io

__動画編集:__ Aviutil

__3DCG:__ Blender

__画像編集:__ GIMP

__DAW(MIDIベタ打ちのみ):__ LMMS

____
Maked by MarkDown on GitHub Pages

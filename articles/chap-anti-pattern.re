= 工数見積もりアンチパターン

//flushright{
ゆのん @yunon_phys
//}

== はじめに
ソフトウェア開発プロジェクトが始まった。コンセプトが決まった。どんなユーザーに届けたいかも決まった。
何をやるかも大枠は決まっている。人は確保出来た。
あとはリリース日を確定させるために、ちゃちゃっと工数見積もりをして、ガントチャートを作るぞ！

・・・と、ちょっと待ったー！

その見積もり、大丈夫ですか？どうやってやろうと思っていますか？
ちゃちゃっと、でこの先のスケジュールを決めちゃって本当に大丈夫ですか？

見積もりによってプロジェクトの運命が変わると言っても過言ではありません。
なんとなくやってしまう見積もりが、後で大炎上の火種になる可能性があります。
ここではやりがちな見積もりのアンチパターンを書いていきます。

== アンチパターン1: リーダーの見積もりを使用する
あなたは見積もりをするときに、誰に見積もろうと思っていましたか？
もしかして、チームのリーダーに見積もってもらおうと思いませんでしたか？
チームのリーダーに見積もってもらうのは、工数が大きいのか小さいかの判定だけ有効です。
原理的に困難な課題があるか、これまでにやったことのあるものであるか、
自動化して効率化可能であるか、などを加味し、工数が大きいか小さいかの判定だけを信頼しましょう。
それ以外の何日かかる、といったリーダーの具体的に算出した見積もりを当てにしてはいけません。

「ものすごく優秀なリーダーの見積もりだったら、使用して良いのではないか？」

実は、それこそが罠です。
残念ながら、リーダーが優秀であれば優秀であるほど、算出した見積もりを当てにしてはいけません。
では、なぜ優秀なリーダーの見積もりを当てにしてはいけないのでしょうか？

残念なことに、多くの場合、チームのメンバーはリーダーと同様のスピード・質で実装出来ません。
リーダーよりも遅く・質の低いコードを書くのであれば、どんどんスケジュールは遅延していきます。
逆にリーダーよりも速く・正確にコードを書くのであれば、そもそもその見積もりは当てになりません。

では、どうすれば良いのでしょうか。
理想的にはチーム全員で見積もりをするのが良いですが、アジャイルのプラクティスをいくつか導入する必要があります。
それが難しければ実際に作業をする人で見積もりましょう。
もしこれが出来ないのであれば、そのプロジェクトに別の課題が隠れています。

例えば、チームメンバーが固定ではないという制約がありませんか？
度々新人が出入りするようなプロジェクトは、新人がプロジェクトになれるためのコミュニケーションコストがかかります。
そのコミュニケーションコストは在籍メンバーが支払うことになるため、在籍メンバーの作業時間が圧迫され、結果スケジュールの遅延リスクが高まります。

他にも、見積もりに時間をかけられないという制約がありませんか？
もし短期的に計画づくりをして、その見積もり通りに動かなければいけないのであれば、危険な信号です。
ここについては後に記載する、"アンチパターン3: 一度決めた見積もりをそのまま使い続ける"を参照してください。

== アンチパターン2: 見積もった結果を人数で割る
この考えの根本にあるのは、"全員が同じだけのアウトプットが出来て、かつ作業内容は並列可能"という仮説です。
全員が同じだけのアウトプットを出すと仮定するのが危険なことは、"アンチパターン1: リーダーの見積もりを使用する"でも述べました。

忘れがちなのは、作業内容が並列可能である、という仮説です。
並列可能な作業とは、順番が交換可能で、かつ、メンバー同士でコミュニケーションを取らずに進む作業のことを指します。
しかし、残念ながらソフトウェア開発では並列可能な作業はそもそも少ないです。
例えば、2つのモジュールから成り立つシステムを作る際、それらの2つのモジュール間には必ずインターフェースが必要となります。
２つのモジュール開発を独立で作業していたとしても、インターフェースを変更するのにはコミュニケーションが必要になります。
結合のためにどちらかが待ったり、結合がうまく行かなかった場合は修正作業が必要となります。
このように、モジュール単位の並列作業は実現出来ますが、それらを結合していく過程で同期(つまりコミュニケーション)が必要になります。
同期が必要になればなるほど、結果として、人数で割った結果から乖離していきます。

では、どうすればうまくいくのでしょうか？
まず作業手順を明らかにして、並列可能な箇所と不可能な箇所を明らかにしましょう。
さらに、固定化されたチームメンバーでどのぐらいの期間で完了出来るか、に着目しましょう。

== アンチパターン3: 一度決めた見積もりをそのまま使い続ける
一度出した見積もりをリリースのその日まで使おうと考えていませんか？
見積もりはその見積もった瞬間の、最もうまくいったパターンの切り取りでしかない、ということを忘れてはいけません。
やろうとしていることは不確実性がそもそも高いものです。市場変化、チームメンバースキルの不均一性、技術的な難易度、メンバーの事故・病気、PCの故障、コミュニケーションミスによる遅延など、あげたらキリはありません。

これらの不確実性を完全に取り除くのは不可能で、ゆらぎが必ず発生します。
特に開発初期の不確実性は最も高いと一般にされています。
Steve McConnellの不確実性のコーンによると、開発初期の段階の見積もりは実際にかかる工数から0.25~4倍ずれるとされています。
一方、終盤になってくると不確実性は減っていくため、そのずれは小さくなっていきます。
このため、最初に見積もった値をそのまま利用するのは危険です。

PMBOK@<fn>{pmbok}では、超概算見積もり、概算見積もり、正式見積もりの3つに分けることを推奨しています。
これは見積もりの度に、不明確な領域を減らすことで、見積もりの精度をあげようという試みです。

//footnote[pmbok][プロジェクトマネジメント協会の発行しているプロジェクトマネジメント知識体系ガイド]

アジャイル開発では、見積もりをイテレーション@<fn>{iteration}ごとに実施します。
また、精度を高めるために、各イテレーションごとにどのぐらいチームで消化したかを計測します。
この計測結果が2~3回分集まると、おおよそイテレーションでどの程度消化出来るかがわかる(この結果をvelocityと言います)ので、精度が高くなっていきます。

//footnote[iteration][一定の開発期間のこと。1週間から4週間の間で設定するのが一般的。]

見積もった結果は変化するということを前提に、どのタイミングで再度見積もりをするか考えて進めましょう。

== どうすれば見積もりの精度が高くなるのか？
現代のソフトウェア開発は、スケジュール完遂の不確実性が高いという前提に立ちましょう。
不確実性が高いということは、不確実性を低くする努力が必要だということです。

見積もりの精度が高くなるコツは、

 * 実際の作業者が見積もりをする
 * 作業順番を詳細化する
 * 不明確な事項を少なくする
 * 実測値を利用する

の4つです。
実際にやってみると大変ですが、見積もりに時間をさきつつ、何度も計画を見直す覚悟を持って取り組みましょう。

== 参考文献
 * Jr. Frederick P. Brooks著『人月の神話』(滝沢徹・牧野裕子・富澤昇訳)　丸善出版
 * Mike-Cohn著『アジャイルな見積もりと計画づくり』(安井力・角谷信太郎訳)　マイナビ出版
 * Project Management Institute著『プロジェクトマネジメント知識体系ガイド PMBOKガイド 第6版(日本語)』Project Management Institute



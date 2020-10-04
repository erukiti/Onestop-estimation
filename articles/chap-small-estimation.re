= 見積もり依頼の基本（小規模Projectを発注する編）

//flushright{
親方＠oyakata2438
//}

== はじめに

発注者として、見積もり依頼を行う場合の基本的な流れについて述べます。小規模であるとはいっても必要な事項はプロジェクトの規模によらないし、むしろ基本的な内容を自分で処理する必要があるため、見積りについて学び実体験するテーマとしては適当かもしれません。また小規模ならばこそ、失敗しても修正が効いたり、ダメージが少ないというメリットがあります。見積もりの規模として、数万円から数十万円程度の規模を想定していることを前提とします。その程度なら、日常業務の中で触れる機会も多いでしょう。そしてそれ以上の規模になると、付帯する書類や打ち合わせ内容、手続きが増加するため、今回のスコープからは外します。もっともだからといって、大規模になったからといって本質が変わるわけではありませんが。

== 見積依頼仕様書を作る

まずは、見積もり依頼を出すにあたっての仕様書（見積依頼仕様書）をつくります。発注や検収にかかわる見積仕様書と、機能や実装内容にかかわる、機能仕様書の二つを作り、こちらの要望を明確にしましょう。定型フォーマットを作っておくと後々使いまわしができます。また両方の機能をまとめて一つのフォーマットにしてもよいですが、会社やその部署での前例があれば文言などはそれに従うとよいでしょう。ただしいずれもいかに示す内容が含まれている必要があります。

=== 見積もり仕様書

 : 1. 仕様書番号

　任意だが、あると整理しやすい場合があります。複数案件がある場合など、混乱しないよう番号を振ります。

 : 2. タイトル

　わかりやすい名前をつけるようにしたいものです。冗長にならないように、抽象的過ぎたり短すぎたりしないように

 : 3. 担当者・連絡先

　会社名、部署名、担当者名、連絡先として、メアド・電話番号等を記載します。

 : 4. 案件の概要

　定型文で構いません。

　例：本仕様書は、「XXXの製作」に関する仕様を定める。

 : 5. 詳細仕様

　目的、機能仕様、等を簡単に記載します。詳細は機能仕様書によりますが、主要な項目についてはここに記載するとよいです。

//emlist[詳細仕様の記述例]{
　記述例1：ソフト等の制作の場合
　目的：データ収集ソフトを制作する
　機能仕様：
　指定のマイコン（Arduino）を用い、一定周期ごとにアナログデータを収集するソフトを制作すること。
　収集仕様は以下の通り。
　　・収集点数　4点
　　・分解能　8bit
　　・収集周期　1秒
　　・出力形式　csv書き出し

　記述例2：機械加工品等
　組み立て図XXXに示す加工品を製作する。
　個数：10個
　材質：SUS　304
　加工精度：一般公差による。
　・加工精度例：長さ寸法に対する許容差（JISB0405-1991）による。
　・加工精度例：一般公差による。
　・加工精度例：xxの精度は、50mm±0.001mm以内、それ以外は一般公差とする。
//}

 : 6. 見積もり範囲

見積もり範囲には、納品物に含まれるの範囲や数量を明記します。また支給部材、見積もり範囲外、貸与品等についても整理して記載します。原則、機能仕様部分に基づき製作したものを、見積もり範囲にしたがって納品します。責任範囲を定める重要な記述で、検収条件にも関わるので注意が必要です。

支給部材および貸与品については、必要に応じて記載します。

原則、材料の調達を含めて受注者責任になり、その費用及び調達にあたっての期間は費用及び納期に織り込まれます。しかし製作・調達にあたって特殊な素材や機材が必要な場合、あるいは手持ち部材に追加工を依頼する場合などに、発注者から支給する場合があり、その際に支給部材について明記します。

また、貸与品については、製作者の方で所有していない・準備が困難なものが製作の前提となる場合などに記載します。高価・特殊な測定器、環境構築・機材が必要な場合などであり、発注者から受注者に貸与する場合に記載します。また、貸与が無償なのか有償なのかを明記します。

製作などにあたってメーカーの方で必要な機材がある場合、ぜひ貸与することを考えてください。貸与することで、メーカーで購入、調達する必要がなくなりますので、トータルでの出費を下げることができます。もちろん発注者側に手持ちがない場合などは仕方ありませんが、メーカーに貸し出すことでその機材の入手を考える必要がなくなり、納期も短くなりますし、費用も下がります。

機材が特殊であればあるほどそのインパクトは大きくなります。

//emlist[見積もり範囲の記述例]{
　見積り範囲内
　・Arduino計測ソフト製作　一式　
　　電子データ（メール提出不可。CD書き込みの上提出のこと）
　・完成図書　一式
　　取扱説明書を含むこと。
　
　見積もり範囲外
　　Arduinoボード
　貸与品
　　Arduinoボード 1個。　Arduinoに接続する温度センサ　1式。無償貸与とする。
//}

このように記載することで、メーカーは、Arduinoの調達を行う必要がなくなり、ソフト開発に専念することができます。Arduinoおよびセンサの調達にかかわる部分のメーカーの工数分安価・短納期にすることができるでしょう。Arduinoレベルなら調達の手間は知れていますが、これが極めて特殊なものだったらどうでしょう？受注者で入手ルートを検討し、購入してから開発になります。もちろん支給する場合には、受注者で入手するより早く、確実に入手できることが前提になりますが。

あるいは、評価を取るために恒温槽のような装置が必要で、受注者にはその設備がない場合を考えてみてください。発注者には手元に恒温槽があります。このような場合には、以下のように記載することができます。

//emlist[見積もり範囲の記述例2]{
　見積り範囲内
　・Arduino計測ソフト製作　一式　
　　電子データ（メール提出不可。CD書き込みの上提出のこと）
　・完成図書　一式
　　取扱説明書を含むこと。
　　温度計測結果評価データを含むこと。少なくとも0℃～80℃の範囲で実施のこと。
　
　見積もり範囲外
　　Arduinoボード
　貸与品
　　Arduinoボード 1個。　Arduinoに接続する温度センサ　1式。無償貸与とする。
　　評価環境（可搬型恒温槽）を無償にて貸与する。往復運送料は発注者負担とする。
//}

 : 7. 納期

  納期を書きます。希望納期は「これくらいにはほしい」の意であり、絶対に守らなければならない厳守納期ならその旨の明記は必須です。

　例：納期は別途打ち合わせによる。希望納期は12月末とする。

　例：納期は12月末厳守とする。

 : 8. 検収条件

　検収の根拠となる事項について記載する。

　例：成果物（ソフト一式を含む完成図書）の納品、確認を以て検収とする。

　例：加工物の納品、数量および個数の確認を以て検収とする。

　例：見積り範囲内の成果物一式の納品、貸与品の返却を以て検収とする。

　検収条件は、契約そのものにかかわる重要な記述です。

 : 9. その他

　仕様変更が生じる可能性が高い場合には、以下の文言を追加しておくと良いでしょう。仕様書には書き切れない詳細事項はありますし、今後の打ち合わせ、相談で仕様変更が行われる可能性は十分にあります。ここまでに記載したいくつかの仕様などが変更になる場合の免責でもあります。また変更する手続きを明記しておくことで、勝手に変更されたり、変更できなくて困るといった事態を避けることができます。もちろん事前の取り決め通りに事が運ぶことがベストではありますが。

　例：詳細仕様は打ち合わせにより定める。打ち合わせにより定めた事項は本仕様書に優先する。ただし、打ち合わせ議事録は、受注者が制作し、発注者と共有すること。

=== 機能仕様書

見積仕様書は、発注に進むための形式的な書式と言えますが、機能仕様書はより具体的に見積もりをしてもらうために作る書類です。機能仕様書をもとに受注者候補の人が見積もりを行い、実施可否、納入までの期間、費用を見積もります。ですから、自分がどういうものを作ってほしいのか、作るにあたって注意してほしいことなどはきちんと記載する必要があります。察して、といった類の書類ではありません。見積もり仕様書はあくまで契約手続き用、機能仕様書は技術的な中身、と分けて書くようにすると、書きやすいかも知れません。

基本的にはフリーフォーマットで良いのですが、適宜図表等を利用して、意思伝達、打ち合わせをスムーズにできるとよいでしょう。

基本的には見積もり仕様書の内容を踏襲し、技術的・機能面等、製作物・依頼内容についての詳細を記載します。

ソフト等の場合は、処理のフローや画面イメージが分かるものがあると理解が早まります。処理フローの作成は少々面倒ですが、そこを可視化することで自分がほしいものをより具体化することができます。具体的な処理フローに落とすことで受注者との間で矛盾や仕様の齟齬がなくなり、製作時の手戻りがなくなります。何より自分の希望する内容がはっきりしますので、是非作りましょう。もやっとしていては人に作ってもらうことはできません。

機能仕様書を作ることにより処理フローを明確にすることで、100kHzでサンプリングしたいが、ハードウエアの制約で10kHzでしかできない（そのためハード選定からやり直す）といった致命的な手戻りをなくすことができます。

また、機械加工での製作物では、ぜひポンチ絵をつけましょう。CADでの清書までは求めない（し、自分で作るのは大変です）が、図があると文字での説明とは比べ物にならないほど意思伝達がスムーズになります。必要な寸法や加工精度、加工内容について記載します。そして、打ち合わせにおいて、無理がある点や精度などに妥協することで製作が容易になったりします。

== 打ち合わせ

メーカー担当者に見積もり仕様書、機能仕様書を送り、見積もり依頼を行います。会社としては競札が推奨されるでしょうが、目当てのメーカー、ツテのあるメーカーがあるなら、まずはそこに見積り依頼を出します。作った仕様書に過不足なければ、受注者における疑問点、確認点が少なくなるので、打ち合わせにかかる工数が減ります。先方に具体的にイメージを伝えるための書類ですから、できるだけ具体的に書くことが需要です。

さて、発注するということは、「自分ではできないことを発注する」、ということが基本になります。したがって実装や製作過程については基本的には先方の方が詳しい事が多いといえます。逆に、作りたいもの、やりたいことについては、発注者のイメージが正しいので、そのイメージを伝えつつ、作れる形に落とし込む、すり合わせる過程であるといえます。

したがって、定期的に先方の認識を確認する必要があります。誤解しやすいところについては受注者の理解を確認しましょう。伝え方が悪い、勘違いしやすい図面・記述になっているなどがあると、先方が誤解する可能性があります。そのためには、必要な図面を清書してもらったり、処理フローを書き下してもらう等で確認及び認識の共通化をすることが有用となる場合があります、

なお、見積りを依頼した結果、実装・製作が不可能な場合もあります。こういう時に、作り方を変えたり、作れるように仕様を変えてもらうなどといった検討が可能になります。できる方法はありませんか？と聞いてみましょう。また、他にできる人・会社を探すという検討をする必要があります。

ただ、何でもかんでも先方の言い値に従う必要はありません。もちろん先方・受注者はある程度の根拠をもって見積回答をしているでしょうが、こちらの想定するコストと納期も勘案する必要があります。予算には限りがあります。

また、無駄な打ち合わせをするために気軽に呼びつけることがないようにしましょう。来てもらうにも、時間も交通費もかかるし、その移動時間でその人が本来片づけられた仕事が遅れるなどもあります。ひざを突き合わせての打ち合わせの方が話が進むというのも理解できるところではありますがが、だからと言って、発注前の事前打ち合わせならばなおさら、時間を取ってこちらへ来てもらうというという意識を頭の片隅に置いておきましょう。必要や人数によっては、発注者が先方に出向くことが効率的な場合は、そちらを選択しましょう。また、来てもらったらその分だけ結果として上がってくる見積もりに費用が上積みされると考えましょう。

発注者であるからといって、偉そうにしてはいけません。また大企業だから、発注者だからえらいということはありません。発注者様があたかも小姓を呼び出すように軽く考えて呼び出すことは避けてください。とはいえ、実際世の中には多そうですが……。

== 発注仕様書を作る
打ち合わせの結果を反映した、発注仕様書を作成します。大きな変更点がなければ、見積もり仕様書と同じものになります。

検収条件等について明記し、確認を十分におこなうことが必要です。打ち合わせで決まったことはこの時点できちんと反映することで、手戻りや齟齬が減ります。

発注仕様書を作る段階では、すでにメーカー/受注者の方からの見積書ができているはずです。打ち合わせ済、対応可能な受注者が決まっているという状態になるので、ほぼ指名状態での発注になります。ここからさらに競札をやっても時間の無駄なので、少額、小規模という状況も鑑みなどを発注・契約担当部署に受注者指名での依頼を行います。建前上それができないならば、「XX社担当と仕様事前打ち合わせ済」などと連絡すれば、受注者を照会先に指定して進めてくれる場合もあるでしょう。

== 発注
金額、工数、スケジュールなどがわかる見積もり書をもらったあと、発注の段階に進みます。会社であれば、発注・契約手続き自体は資材契約担当者がいるはずなので、そこに任せることになります。発注システムがある会社もあるでしょう。必要事項を入力し、必要な決裁をもらいます。

発注後は進捗を適宜確認し、疑問点があれば回答します。発注側として、進捗をチェックするとともに、途中で必要に応じて実装の中身が正しいか（意図した通りか）を確認していきます。最悪なのは、締め切りギリギリに意図したものと違うものが出てきたときです。これは、途中で確認しなかったときなどに発生する可能性が高まります。図面チェック、途中相談があれば回避できることですから、積極的に「進捗どうですか？」「困ってることありませんか？」「どんな感じになってるか途中見せてもらえませんか？」など声をかけてみましょう。

発注した範囲を超えるような改造指示、追加は慎まなければなりませんが、意図したことが伝わっていないと完全な手戻りになります。途中途中で方向修正することで、大幅に道を外れることがなくなります。

== 納品・検収
いよいよ完成しました。納品です。

納品されたら、所定の機能が実装されているか、寸法などの仕様は適切か、という観点で確認します。注文はあくまで契約なので、仕様未達は修正を指示します。ただし、発注仕様書に記載がなかった場合、不備があった場合には、発注者責任なのでその対応は発注者の責任になります。具体的には、追加費用を支払ってやってもらうか、そのままで受領するかを選ぶ必要あります。しかし想定仕様と異なるので、それは困りますね。そういった問題を回避するための仕様書であり仕様打ち合わせであることを忘れないようにしましょう。仕様書、打ち合わせの段階で意思伝達、イメージ共有ができていなかった、不十分だったということですから、次に活かしましょう。

== 注意事項

発注者はおカネを払う側なので、一般に発注者のほうが力が上の場合が多いといえます。したがって、お願いも聞いてもらいやすくなりますし、「よしなにやって」「追加お願い」といった（もちろん限度はありますが）無茶を聞いてもらえる場合も多くなるでしょう。さらに、大きめの企業から（相対的に）小さい企業、あるいはフリーランスに発注するなどのように、会社・立場からの力の差があることも多くなります。

しかしだからといって「無理難題を飲ませる」といったことは当然やってはいけません。法律的にも下請法などで厳しく規制されていますし、相手あっての仕事でもあります。仮に一回は飲んでもらえたとしても、次はお断りされるといった悲しいことになる可能性があります。受容限界を超えるとそうなるのは当然です。無理を押し付けないで、よい関係を築いていきたいものです。

発注額を指定しての見積もり依頼は、受注額を指示することになるので、本来やってはいけないことです。とはいえ予算が決まっている場合に、こちらの希望予算をまったく開示しないというのもマッチングミスが発生してしまう懸念があります。例えば予算30万しかないところに、100万という見積もりが返ってくる場合などには、実施内容の縮減等含めて検討する必要があります。そういう意味で、予算規模は上手に共有できるとよいですね。あらかじめ仕様に優先度をつけてなどの対応が大切です。予算増額は簡単ではありませんが、予算増額も手段として持っておくようにしましょう。

また金額面でも、10万円以下は経費、10万～20万は少額固定資産、20万以上は設備といった税務上の制約、あるいは稟議・決裁のレベルなどの制約があるかもしれません。これらについても、参考情報として共有しておけると、発注者側ネックでの遅れが生じづらくなるなどの理由でスムーズに進む可能性がある

== 最後に

見積もりを依頼する立場としての流れを簡単に記載しました。この本全体として受注者としての記事が多いので、逆の立場として（実体験をもとに）小規模なプロジェクトを発注する場合について記載してみました。発注者として考える必要があることもありますし、受注者の反対の立場ではありますが、プロジェクトの推進、製作物にかかわる両輪としてどちらか一方では成立しません。本稿があなたの仕事を進めるうえでの一助になれば幸いです。

# iosMovieApp
这是我和邱睿合作的移动互联应用技术课程的最终项目-《电影猜猜猜》。

##目标
主要是希望做一款在ios平台上的电影测试app。主要基于PageControl来做。
电影的数据分为两期：
1.预先存入一些电影数据；
2.从豆瓣网上获取电影数据；

##功能
打开应用后，会随机获取数据中的一部电影。会给出这部电影的一些线索，包括电影的类型、剧照、或者是经典台词、角色等等。用户会有一个初始的积分，当用户答对的时候会有加成，如果打错就会扣除积分，如果用户猜不出，将会给出这部电影的简单信息，包括演员表，剧情，评分等等，推荐用户去观赏。

##进展
12月初：已经找到一些相关的资料，准备开始着手开发，大概在1~2周内做出雏形。但是连接豆瓣网方面暂时不容乐观，虽然找到了一个获取豆瓣电台音乐的开发教程，但由于电影的线索从网上爬图，很难保证图片中不会有泄露答案的内容，比如电影名。而且临近期末，有三四个大实验要处理，估计最后可能只能做到手动存入一些数据。

12月13日：目前已经完成了项目主界面的设置，主要包括一些Label和Button。还有就是对整个页面的布局进行了简单的设计。但是在不同的设备上显示的时候显示的效果会有一点瑕疵：目前的布局在iphone6,iphone6s上显示的效果是最佳的，在其他环境下显示的效果一般，我们将会在后续中改进。


<<<<<<< HEAD
# XQY_Unusedresources
=======
#
找到在XCode项目中未使用的图像和资源。参照(http://jeffhodnett.github.io/Unused/),但运行非常缓慢,结果并不是完全正确的。所以我做了一些性能优化,搜索速度更比未使用的要快。

## Example

![LSMessageHUD Example1](https://github.com/tinymind/LSUnusedResources/raw/master/LSUnusedResourcesExample.gif)  

## Usage

It's an useful utility tool to check what resources are not being used in your Xcode projects. Very easy to use: 

1. Click `Browse..` to select a project folder.
2. Click `Search` to start searching.
3. Wait a second, the results will be shown in the tableview.

## Feature

Check `Ignore similar name` to ignore the resources which referenced by string concatenation.

For example:

You import some resources like:

```
icon_tag_0.png
icon_tag_1.png
icon_tag_2.png
icon_tag_3.png
```

And using in this way:

```
	NSInteger index = random() % 4;
	UIImage *img = [UIImage imageNamed:[NSString stringWithFormat:@"icon_tag_%d", index]];
```

`icon_tag_x.png` should not be shown as unused resource, we should ignore them.

找到未使用的文件导出到txt，然后可以在终端执行命令｜sudo rn -r -f ｜文件路径”批量删除文件。
## Installation

* Download: [LSUnusedResources.app.zip](https://github.com/tinymind/LSUnusedResources/raw/master/Release/LSUnusedResources.app.zip)
* Or build and run the project using XCode.

## Requirements

Requires OS X 10.7 and above, ARC.
>>>>>>> upstream/master

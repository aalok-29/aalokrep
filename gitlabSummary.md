# Git workflow

There are three main components of a Git project:

* Repository
* Working tree
* Index

The `repository`, or `repo`, is the “container” that tracks the changes to your project files. It holds all the commits—a snapshot of all your files at a point in time—that have been made. You can access the commit history with the Git log.

The `working tree`, or `working directory`, consists of files that you are currently working on. You can think of a working tree as a file system where you can view and modify files.

The `index`, or `staging area`, is where commits are prepared. The index compares the files in the working tree to the files in the repo. When you make a change in the working tree, the index marks the file as modified before it is committed.

## Below is the basic Git workflow:

1. Modify files in the working tree.
2. Stage the changes you want to be included in the next commit.
3. Commit changes. Committing will take the files from the index and store them as a snapshot in the repository.

## Three states of Git files
As you can probably guess from the Git workflow, files can be in one of three states:

* Modified
* Staged
* Committed
When a file is first modified, the change can only be found in the working tree. You must stage the changes you want to be included in your next commit. The index contains all file changes that will be committed. Once you have finished staging files, commit them with a message describing what you changed. The modified files are now safely stored in the repo.

The three file states for Git: modified, staged, and committed.
The three file states for Git: modified, staged, and commited.

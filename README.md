# COP 3530 - Fall 2019, Professor Bitner

This is the code that we have developed in class.
We will update this continually as the semester progresses, `git pull` often.

## Command line basics
* `pwd` - Show the full path to the Present Working Directory.
* `ls` - List the files in the current directory (folder).
* `cd FOO` - Change into the subdirectory named "FOO".
* `cd ..` - Go up one level in the directory tree.
* `mv f1 f2` - Moves (renames) file "f1" to "f2".
* `rm f1` - ReMoves (deletes) file "f1".

## Git basics
* `git clone URL` - clones a Git repository hosted at URL. This will create a new sub-directory at your current location (`pwd`) whose name is the same as the name of the repository.
* `git status` - Shows what has changed, what is staged for commit and what is not.
* `git add FILE1 FILE2` - Adds "FILE1" and "FILE2" to the staging area to be committed.
	* `git add .` - Adds all files in pwd and below to the staging area. `.` is Unix shorthand for the current directory.
* `git commit -m "Terse but clear explaination of changes"` - Commits all changes in the staging area to the Git repository.
* `git push origin master` - Pushes the default (master) branch to the remote location called origin, which is the default created when using `git clone`.

### Other Git commands you might need
* `git pull` - Pulls down changes from the remote repository, typically done because you tried to push and it tells you that your branch is behind the HEAD at origin.
* `git diff` - Shows all of the changes made since the last commit. This is great for figuring out why your code that was working five minutes ago isn't working now. It is also a good habit to get into before a commit to ensure that you are only committing what you think you're committing.

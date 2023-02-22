# Hazel
## What is the difference between git and github?
### What Is Git?
Version control system. Git is installed and maintained on your local system and gives a record of your ongoing programming versions. It can be used completely exclusive of any cloud-hosting service — you don’t even need internet access. Git is also specially designed to work well with text files(Code).  branching mode
 
### What Is GitHub?
GitHub is designed as a Git repository hosting service (GitLab, BitBucket,s and SourceForge ).  It’s an online database that allows you to keep track of and share your Git version control projects outside of your local computer/server. 
Unlike Git, GitHub is exclusively cloud-based. In addition to offering all of the features and advantages of Git, GitHub expands upon Git’s basic functionality:an extremely intuitive, graphically represented user interface, and provides programmers with built-in control and task-management tools. 
An individual’s Git repositories can be remotely accessed by any authorized person, from any computer, anywhere in the world. This makes it possible for entire teams to coordinate together on single projects in real-time.
###What is the difference?
Git is a version control system that lets you manage and keep track of your source code history. GitHub is a cloud-based hosting service that lets you manage Git repositories. 
 
##Name 3 benefits of a version control system:
Create regular, automated backups.
Keep track of every change made to the code.
Access every file's entire long-term modification history.
Streamline merging and branching. developers can keep several streams of work separate while still having the option to merge them back together.
Examine and experiment with code. The development of any source code is continuous. Build new features, test them, and ensure they work before uploading this new feature to the main project.
 
## Name 3 alternatives to git:
SVN (Subversion), CVS, mercurial, 
Bitbucket für mercurial wie GitHub für Git
 
##Name 2 differences between git and other version control systems:
1)     Git is a distributed version control system whereas SVN is a centralized version control system. This means that every user has a complete copy of the repository and its entire history, rather than relying on a central server for version control. 
a)     -> increased speed and reliability, offline work capability, and better security.
2)    Git has a flexible and powerful branching and merging model compared to other version control systems. 
3)    Git has a large and active community, and its open-source nature
 
## Name known issues related to game engines (Unreal, Unity) and version control systems: 
 
#### Unreal Engine supports 4 version control systems: Perforce, Git, SVN, Plastic
#### Unity supports Perforce and Plastic.
-       merging of scene files have to be done manually because of binary file description 
-       large file sizes (assets) version control systems are usually built for working with source code, not with binary files
-       game engine version dependencies. We should have a build script create a build from source code and assets. installed and generated files shouldn’t be in VC. They make the repository slow to copy and synchronize.
 


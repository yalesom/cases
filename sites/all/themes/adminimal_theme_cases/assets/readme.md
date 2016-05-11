# Scaffolding your project's assets

## Prerequisites

The following packages are needed before you can scaffold your package.

+ [NodeJS](https://nodejs.org/en/download/) - This must be installed first.
+ [Bower](http://bower.io/)

If you already have the above packages install you can skip to the installing section.  Otherwise, continue reading.

Once NodeJS is installed, run the following command to install bower:

```bash
$ npm install -g bower 
```

---

## Installing

_**Note:** While the setup task will run in any folder it can only update the files needed to complie your code if you run the following clone command inside an assets or includes folder._

In your terminal window, please navigate to your projects assets or includes folder and run the following:

### Step 1

```bash
$ git clone git@bitbucket.org:sq360_sysadmin/base-project-setup.git .
```

**Note:** If you get the following error _fatal: destination path '.' already exists and is not an empty folder._ Please make sure the folder is empty.  Sometimes hidden system files are created.

You can run the following command to see if any files are in the current folder.

```bash
$ ls -al
```

Once the verify the folder is empty, run Step 1 again.

### Step 2

After this package is cloned succesfully, you need to download all the NodeJS dependencies.

```bash
$ npm install
```

**Note:** This process could take a mintue or two.

After all the dependencies are downloaded, run the following command to being the scaffolding process

```bash
$ gulp setup
```

**Note:** You will be asked a series of questions about your project.  Based on your yes or no responses  more packages, folders, etc. will be added to project.

---

## Usage

To watch for changes to your SCSS and/or JS files in the **src/** folder, run:

```bash
$ gulp watch
```

If you want to make a production release of your CSS and JS, run:

```bash
$ gulp build
```

**Note:** If at any point you forget what gulp tasks do what, you can just run:

```bash
$ gulp
```


You'll be presented with options and explainations of the tasks, just press a number and that task will run.
cd core-sites
FILES=*
DATE=$(date +"%Y%m%d%H%M%S")
FILENAME=diff_$DATE.txt

for f in $FILES
  do
    if [ -d $f ] ;  then
      echo $f is a directory
      if [ -d ../$f ] ; then
        diff -rqyl $f ../$f > $FILENAME
        if [ -s $FILENAME ] ; then
          rm -rf ../$f
          mv $f ../$f
          echo need to update core for $f
        fi
      else
        mv $f ../
        echo just moved $f
      fi
    elif [ -f $f ]; then
      echo $f is a regular file
      if [ -f ../$f ] ; then
        diff $f ../$f > $FILENAME
        if [ -s $FILENAME ] ; then
          cp $f ../$f
        fi
      else
        cp $f ../$f
      fi
    fi
  done
rm $FILENAME
cd ..


compdir () (
  [ "$1" == "$2" ] || [ "$1" == "$2/" ] || [ "$1" == "$2\\" ]
)

checkdir () (
  DIR=$1
  lclchk () (
    !(compdir $DIR $1)
  )
  lclchk '.' && lclchk '..' && lclchk '.git' && lclchk 'node_modules' && lclchk 'external' && lclchk 'personal' && [ -d $1 ]
)

cleandir () (
  for dir in $(ls -a $1)
  do
    checkdir $dir && cleandir $dir
  done
  cd $1
  echo Directory "$1"
  rm -rfv tmp temp *.tmp *.temp *.exe *.log npm-debug.log*
)

cleandir $(pwd)

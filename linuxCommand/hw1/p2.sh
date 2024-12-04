read score

case $score in
    [0-9] | [1-5][0-9])
        echo "F"
        ;;
    6[0-9])
        echo "D"
        ;;
    7[0-9])
        echo "C"
        ;;
    8[0-9])
        echo "B"
        ;;
    9[0-9] | 100)
        echo "A"
        ;;
    *)
        echo "Invalid score"
        ;;
esac

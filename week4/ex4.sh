while true; do
    read command
    eval "$command &"
done
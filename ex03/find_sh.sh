find . -type f -name "*.sh" -print | sed 's/.sh//' | sed 's/.*\///'

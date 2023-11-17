#!/bin/bash

output_file="AUTHORS"

# Ajoute la phrase au début du fichier
echo "# This file lists all contributors to the repository." > "$output_file"
echo >> "$output_file"  # Ajoute un retour à la ligne

# Utilise git log pour obtenir la liste des auteurs avec leurs adresses e-mail
git log --format='%aN <%aE>' | awk '!seen[$1]++' >> "$output_file"

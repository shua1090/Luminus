cd /usr/local/lib
sudo curl -O https://www.antlr.org/download/antlr-4.9-complete.jar


export CLASSPATH=".:/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH"
alias antlr4='java -Xmx500M -cp "/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH" org.antlr.v4.Tool'
alias grun='java -Xmx500M -cp "/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH" org.antlr.v4.gui.TestRig'
sudo echo "" | sudo tee /etc/bash.bashrc
sudo echo "export CLASSPATH=\".:/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH\"" | sudo tee -a /etc/bash.bashrc
sudo echo "alias antlr4='java -Xmx500M -cp \"/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH\" org.antlr.v4.Tool'" | sudo tee -a /etc/bash.bashrc
sudo echo "alias grun='java -Xmx500M -cp \"/usr/local/lib/antlr-4.9-complete.jar:$CLASSPATH\" org.antlr.v4.gui.TestRig'" | sudo tee -a /etc/bash.bashrc
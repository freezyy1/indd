void Widget::righClicked()
{
    // функция выполняет ход вправо
    for(int j=0;j<4;j++){
        bool moveOccured = false;
        qInfo()<<"j"<<QString::number(j);
        for(int i=0;i<3;i++){
            qInfo()<<QString::number(i);
            if(gameState[j][i] == gameState[j][i+1] && gameState[j][i] != 0){
                gameState[j][i]=0;
                gameState[j][i+1] *= 2;
                i++;
                moveOccured = true;
            }
        }
        // сдвигаем клетки в строке вправо, пока это возможно
        qint64 q = 10;
        while(q--){
            for(int i=2;i>=0;i--){
                if(gameState[j][i] != 0 && gameState[j][i+1]==0){
                    gameState[j][i+1] = gameState[j][i];
                    gameState[j][i] = 0;
                }
            }
        }
        // если возможен ход, то добавляем новую клетку со значением 2 в случайное место
        if(gameState[j][0] == 0 && moveOccured){
            if(luck()){
                for(int i=3;i>=0;i--){
                    if(gameState[j][i] == 0){
                        gameState[j][i] = 2;
                        break;
                    }
                }
            }
        }

    }
    updateUi();
}
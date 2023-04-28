void Widget::makeGameState()
{
    QVector<qint64> tmp;
    for(int i=0;i<4;i++)
        tmp.append(0);

    tmp[2] = 2;
    tmp[3] = 2;
    gameState.append(tmp);
    tmp[2] = 0;
    gameState.append(tmp);
    tmp[3] = 0;
    gameState.append(tmp);
    gameState.append(tmp);
}
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    makeGameState(); // создание начального состояния игры
    updateUi(); // отображение начального состояния игрового поля

    // создание сочетаний клавиш для управления игрой
    new QShortcut(QKeySequence(Qt::Key_Right), this, SLOT(righClicked()));
    new QShortcut(QKeySequence(Qt::Key_Up), this, SLOT(upClicked()));
    new QShortcut(QKeySequence(Qt::Key_Down), this, SLOT(downClicked()));
    new QShortcut(QKeySequence(Qt::Key_Left), this, SLOT(leftClicked()));

}
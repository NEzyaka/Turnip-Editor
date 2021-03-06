/****************************************************************************
**
** Copyright (C) 2015-2016 Nikita Mironov
** Contact: nekit2002mir@yandex.ru
**
** This file is part of Turnip Editor source code.
** Turnip Editor is open-source cross-platform IDE for Turnip programming language.
**
** Turnip Editor is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** Turnip Editor is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Turnip Editor. If not, see <http://www.gnu.org/licenses/>.
**
****************************************************************************/

#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <QObject>
#include <QThread>
#include <QProcess>


class Interpreter : public QThread
{
    Q_OBJECT
public:
    Interpreter(QString p, QStringList args)
    {
        path = p;
        arguments = args;
    }
    void run();
private:
    QString path;
    QStringList arguments;
};


#endif // INTERPRETER_H

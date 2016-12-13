/*
* This file is part of Octopi, an open-source GUI for pacman.
* Copyright (C) 2013 Alexandre Albuquerque Arnt
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*
*/

#ifndef OPTIONSDIALOG_H
#define OPTIONSDIALOG_H

#include "ui_optionsdialog.h"
#include <QDialog>

class OptionsDialog : public QDialog, public Ui_OptionsDialog
{
  Q_OBJECT

private:
  bool m_once;

  void initialize();
  void initButtonBox();

  void initIconTab();
  void initTerminalTab();
  void initTerminalTableWidget();

protected:
  virtual void paintEvent(QPaintEvent *);

public:
  explicit OptionsDialog(QWidget *parent = 0);

signals:

private slots:

  void currentTabChanged(int tabIndex);
  virtual void accept();

};

#endif // OptionsDialog_H

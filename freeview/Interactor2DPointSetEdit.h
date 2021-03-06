/**
 * @file  Interactor2DPointSetEdit.h
 * @brief Interactor for editing way points in 2D render view.
 *
 */
/*
 * Original Author: Ruopeng Wang
 * CVS Revision Info:
 *    $Author: nicks $
 *    $Date: 2011/03/14 23:44:47 $
 *    $Revision: 1.4 $
 *
 * Copyright © 2011 The General Hospital Corporation (Boston, MA) "MGH"
 *
 * Terms and conditions for use, reproduction, distribution and contribution
 * are found in the 'FreeSurfer Software License Agreement' contained
 * in the file 'LICENSE' found in the FreeSurfer distribution, and here:
 *
 * https://surfer.nmr.mgh.harvard.edu/fswiki/FreeSurferSoftwareLicense
 *
 * Reporting: freesurfer@nmr.mgh.harvard.edu
 *
 *
 */

#ifndef Interactor2DPointSetEdit_h
#define Interactor2DPointSetEdit_h

#include "Interactor2D.h"

class Interactor2DPointSetEdit : public Interactor2D
{
public:
  Interactor2DPointSetEdit(QObject* parent);
  virtual ~Interactor2DPointSetEdit();

  // return true if to have parent Interactor2DPointSetEdit continue processing the event
  // return false to stop event from further processing
  virtual bool ProcessMouseDownEvent( QMouseEvent* event, RenderView* view );
  virtual bool ProcessMouseUpEvent( QMouseEvent* event, RenderView* view );
  virtual bool ProcessMouseMoveEvent( QMouseEvent* event, RenderView* view );
  virtual bool ProcessKeyDownEvent( QKeyEvent* event, RenderView* view );

protected:
  void UpdateCursor( QEvent* event, QWidget* wnd );

  bool m_bEditing;
  int  m_nCurrentIndex;
};

#endif



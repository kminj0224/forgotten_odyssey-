/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001452cc  Symbol: drawScene */

/* cocos2d::CCDirector::drawScene() */

void __thiscall cocos2d::CCDirector::drawScene(CCDirector *this)

{
  float fVar1;
  
  calculateDeltaTime();
  if (this[0x38] == (CCDirector)0x0) {
    fVar1 = (float)CCScheduler::sharedScheduler();
    CCScheduler::tick(fVar1);
  }
  glClear(0x4100);
  if (*(int *)(this + 0x48) != 0) {
    setNextScene();
  }
  glPushMatrix();
  applyOrientation(this);
  glEnableClientState(DAT_00145378);
  glEnableClientState(DAT_0014537c);
  glEnableClientState(DAT_00145380);
  glEnable(DAT_00145384);
  if (*(int **)(this + 0x44) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x44) + 0xe4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 0xe4))();
  }
  if (this[0x29] != (CCDirector)0x0) {
    showFPS(this);
  }
  glDisable(DAT_00145384);
  glDisableClientState(DAT_0014537c);
  glDisableClientState(DAT_00145380);
  glDisableClientState(DAT_00145378);
  glPopMatrix();
  *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
  if (*(int *)(this + 0x14) != 0) {
    CCEGLView::swapBuffers();
  }
  return;
}



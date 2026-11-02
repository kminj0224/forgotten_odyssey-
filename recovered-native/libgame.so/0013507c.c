/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013507c  Symbol: ccDrawCircle */

/* cocos2d::ccDrawCircle(cocos2d::CCPoint const&, float, float, int, bool) */

void cocos2d::ccDrawCircle(CCPoint *param_1,float param_2,float param_3,int param_4,bool param_5)

{
  undefined4 uVar1;
  undefined4 *__s;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CCDirector *pCVar5;
  int in_r3;
  uint __n;
  undefined4 *puVar6;
  int iVar7;
  CCPoint CVar8;
  float __x;
  float __x_00;
  char in_stack_00000000;
  
  uVar1 = __floatsisf(in_r3);
  uVar1 = __divsf3(DAT_001351b0,uVar1);
  __n = (in_r3 + 2) * 8;
  __s = (undefined4 *)operator_new__(__n);
  if (__s != (undefined4 *)0x0) {
    memset(__s,0,__n);
    puVar6 = __s;
    for (iVar7 = 0; iVar7 <= in_r3; iVar7 = iVar7 + 1) {
      uVar2 = __floatsisf(iVar7);
      uVar2 = __mulsf3(uVar2,uVar1);
      uVar3 = __addsf3(uVar2,param_5);
      uVar2 = uVar3;
      cosf(__x);
      uVar2 = __mulsf3(param_4,uVar2);
      uVar2 = __addsf3(uVar2,*param_1);
      sinf(__x_00);
      uVar3 = __mulsf3(param_4,uVar3);
      uVar3 = __addsf3(uVar3,param_1[1]);
      pCVar5 = (CCDirector *)CCDirector::sharedDirector();
      uVar4 = CCDirector::getContentScaleFactor(pCVar5);
      uVar2 = __mulsf3(uVar2,uVar4);
      *puVar6 = uVar2;
      pCVar5 = (CCDirector *)CCDirector::sharedDirector();
      uVar2 = CCDirector::getContentScaleFactor(pCVar5);
      uVar2 = __mulsf3(uVar3,uVar2);
      puVar6[1] = uVar2;
      puVar6 = puVar6 + 2;
    }
    CVar8 = *param_1;
    pCVar5 = (CCDirector *)CCDirector::sharedDirector();
    uVar1 = CCDirector::getContentScaleFactor(pCVar5);
    uVar1 = __mulsf3(CVar8,uVar1);
    __s[(in_r3 + 1) * 2] = uVar1;
    CVar8 = param_1[1];
    pCVar5 = (CCDirector *)CCDirector::sharedDirector();
    uVar1 = CCDirector::getContentScaleFactor(pCVar5);
    uVar1 = __mulsf3(CVar8,uVar1);
    __s[(in_r3 + 1) * 2 + 1] = uVar1;
    glDisable(DAT_001351b4);
    glDisableClientState(DAT_001351b8);
    glDisableClientState(DAT_001351bc);
    glVertexPointer(2,DAT_001351c0,0,__s);
    glDrawArrays(3,0,in_r3 + (2 - (uint)(in_stack_00000000 == '\0')));
    glEnableClientState(DAT_001351bc);
    glEnableClientState(DAT_001351b8);
    glEnable(DAT_001351b4);
    operator_delete__(__s);
  }
  return;
}



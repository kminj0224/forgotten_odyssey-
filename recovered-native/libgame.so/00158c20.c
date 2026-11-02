/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158c20  Symbol: Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesBegin */

void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesBegin
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
               undefined4 param_5)

{
  CCEGLView *this;
  undefined4 uVar1;
  int *this_00;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_40;
  undefined4 local_3c;
  CCSet aCStack_30 [28];
  
  cocos2d::CCEGLView::sharedOpenGLView();
  cocos2d::CCEGLView::getViewPort();
  this = (CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView();
  uVar1 = cocos2d::CCEGLView::getScreenScaleFactor(this);
  cocos2d::CCSet::CCSet(aCStack_30);
  iVar7 = DAT_00158cd8 + 0x158c4c;
  if (*(int *)(param_3 * 4 + iVar7) == 0) {
    this_00 = (int *)operator_new(0x2c);
    cocos2d::CCObject::CCObject((CCObject *)this_00);
    *this_00 = *(int *)(DAT_00158cdc + 0x158c6a) + 8;
    cocos2d::CCPoint::CCPoint((CCPoint *)(this_00 + 6));
    cocos2d::CCPoint::CCPoint((CCPoint *)(this_00 + 8));
    uVar2 = __subsf3(param_4,local_40);
    iVar3 = __divsf3(uVar2,uVar1);
    uVar2 = __subsf3(param_5,local_3c);
    iVar4 = __divsf3(uVar2,uVar1);
    this_00[5] = 0;
    this_00[8] = this_00[6];
    iVar6 = this_00[7];
    this_00[7] = iVar4;
    this_00[9] = iVar6;
    this_00[6] = iVar3;
    this_00[10] = param_3;
    *(int **)(param_3 * 4 + iVar7) = this_00;
    cocos2d::CCSet::addObject((CCObject *)aCStack_30);
    iVar7 = cocos2d::CCDirector::sharedDirector();
    puVar5 = (undefined4 *)cocos2d::CCEGLView::getDelegate(*(CCEGLView **)(iVar7 + 0x14));
    (**(code **)*puVar5)(puVar5,aCStack_30,0);
  }
  cocos2d::CCSet::~CCSet(aCStack_30);
  return;
}



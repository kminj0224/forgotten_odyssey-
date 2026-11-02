/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012f2fc  Symbol: scene */

/* MainScene::scene() */

int * MainScene::scene(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)cocos2d::CCScene::node();
  if ((piVar1 != (int *)0x0) && (iVar2 = node(), iVar2 != 0)) {
    (**(code **)(*piVar1 + 0xc4))(piVar1);
  }
  return piVar1;
}



/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00166f00  Symbol: initWithTileFile */

/* cocos2d::CCTileMapAtlas::initWithTileFile(char const*, char const*, int, int) */

int __thiscall
cocos2d::CCTileMapAtlas::initWithTileFile
          (CCTileMapAtlas *this,char *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  void *__s;
  undefined8 uVar4;
  CCSize aCStack_20 [12];
  
  loadTGAfile(this,param_2);
  calculateItemsToRender(this);
  iVar1 = CCAtlasNode::initWithTileFile
                    ((CCAtlasNode *)this,param_1,param_3,param_4,*(uint *)(this + 0x138));
  if (iVar1 != 0) {
    pvVar2 = operator_new(0x18);
    __s = (void *)((int)pvVar2 + 4);
    memset(__s,0,0x10);
    *(void **)((int)pvVar2 + 0xc) = __s;
    *(void **)((int)pvVar2 + 0x10) = __s;
    *(undefined4 *)((int)pvVar2 + 0x14) = 0;
    *(void **)(this + 0x134) = pvVar2;
    (**(code **)(*(int *)this + 0x118))(this);
    iVar1 = *(int *)(this + 0x130);
    pcVar3 = *(code **)(*(int *)this + 0x80);
    __floatunsisf((int)*(short *)(iVar1 + 6) * *(int *)(this + 0x10c));
    uVar4 = __floatunsisf((int)*(short *)(iVar1 + 8) * *(int *)(this + 0x110));
    CCSize::CCSize(aCStack_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    (*pcVar3)(this,aCStack_20);
    iVar1 = 1;
  }
  return iVar1;
}



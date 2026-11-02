/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001590ec  Symbol: CCSchedulerScriptHandlerEntry */

/* cocos2d::CCSchedulerScriptHandlerEntry::CCSchedulerScriptHandlerEntry() */

CCSchedulerScriptHandlerEntry * __thiscall
cocos2d::CCSchedulerScriptHandlerEntry::CCSchedulerScriptHandlerEntry
          (CCSchedulerScriptHandlerEntry *this)

{
  int iVar1;
  
  CCObject::CCObject((CCObject *)this);
  iVar1 = DAT_0015911c;
  this[0x18] = (CCSchedulerScriptHandlerEntry)0x1;
  *(int *)this = *(int *)(iVar1 + 0x1590fe) + 8;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x19] = (CCSchedulerScriptHandlerEntry)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  iVar1 = *(int *)(DAT_00159120 + 0x159112) + 1;
  *(int *)(DAT_00159120 + 0x159112) = iVar1;
  *(int *)(this + 0x20) = iVar1;
  return this;
}



---
title: HTML `<video>` 影片
tags: [HTML, <video>, 影片]

---

{%hackmd @dzif24x25/IBXIWNXgTju0h2AKtSaLkA %}

###### tags: `HTML` `<video>` `影片`

# HTML `<video>` 影片

`<video>`可用來播放影片或影音串流

## `<video>` 語法

```htmlembedded
<video src="影片連結"></video>
```

### 屬性：

* `autoplay`: 布林 (boolean) 屬性，控制是否自動播放影片，預設是 `false`
* `loop`: 布林 (boolean) 屬性，控制是否重複播放影片，預設是 `false`
* `muted`: 布林 (boolean) 屬性，控制是否靜音，預設是 `false`
* `controls`: 布林 (boolean) 屬性，指定是否顯示影音控制面板，由瀏覽器提供上面會有播放進度、暫停鈕、播放鈕、靜音鈕等，預設是 `false`

### 範例：

```htmlembedded=
<p>muted=true autoplay=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" muted=true autoplay=true width=100%></video>
    
<p>controls</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls width=100%></video>

<p>controls muted=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls muted=true width=100%></video>

<p>controls muted=true autoplay=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls muted=true autoplay=true width=100%></video>
```

<div style="background-color: #000000; color: #FFFFFF;border-radius: 1rem 1rem 0rem 0rem; padding: 0.7rem 1.75rem 0.7rem 1.75rem; font-size: 2rem">
    範例結果
</div>
<div style="border: 1px solid #000000; border-radius: 1rem; padding: 1.75rem; border-radius: 0rem 0rem 1rem 1rem">

<p>muted=true autoplay=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" muted=true autoplay=true width=100%></video>
    
<p>controls</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls width=100%></video>

<p>controls muted=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls muted=true width=100%></video>

<p>controls muted=true autoplay=true</p>
<video src="https://i.imgur.com/zv0dRSA.mp4" controls muted=true autoplay=true width=100%></video>
    
</div>

:::info
點此前往簡報 https://hackmd.io/@dzif24x25/SkZdEGy73
:::
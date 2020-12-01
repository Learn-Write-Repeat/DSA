# LRU Cache Design

## What is LRU ??

    LRU : Least Recently Use
    This technique is used to reduce page fault in cache.
    In this technique we will add the new page frame until cache size doesn't become full. When cache size equals to it's limit then for adding new page we will remove the page which is used least time.

## Approach

There is many approaches but we will go through using Double Ended Queue and Hash set which will make easy to implement and reduce time also.

We will add new pages to front of queue untill size doesn't become full.

After that when we go to add the page,
if new page is not present in queue first we will remove last page (This is the page which used least time) then add new page.

If new page is present in queue then we will remove that page from queue and add to front to maintain recently used process.

### Ex.

    cache capacity = 3,
    Queue = [Empty];

    add(page1) then Queue = [page1]
    add(page2) then Queue = [page2, page1]
    add(page3) then Queue = [page3, page2, page1]
    now cache is full.
    add(page4) then Queue = [page4, page3, page2]
    add(page3) then Queue = [page3, page4, page2]
    continue.......

## Code

To watch the code [Click]() here .

## Time Complexity

    time = O(n), where n = number of pages.

### Thank you for reading :smile:

Rohit Pawar

ping me at [LinkedIN](https://www.linkedin.com/in/rohit-pawar-1a18481b2)

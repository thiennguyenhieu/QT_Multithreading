# QT_Multithreading

**Concept**<br />
Each program has one thread when it is started. 
This thread is called the "main thread" (also known as the "GUI thread" in Qt applications). 
The Qt GUI must run in this thread.

A secondary thread is commonly referred to as a "backend thread" because it is used to offload processing work from the main thread.
This thread has its own event loop and can process events outside the main loop.
There are some objects created and used from within this thead.
The thead event loop delivers events for all objects living in that thread.

The solution for communicating from a secondary thead to the main thread is to use signal-slot connections across theads.
When we connect objects living in the different threads, the mechanism becomes asynchronous.

As the site is being served by Linux servers, the path is case sensitive.

In order to make this work, replace emoticons with Emoticons in the provided url.

enter image description here

The following html code should properly display the image

<img src="https://doc.qt.io/qt-5/images/threadsandobjects.png" alt="hi" class="inline"/>

**Managing Threads (Reference from https://doc.qt.io/qt-5/qthread.html#details)**<br />
QThread will notifiy you via a signal when the thread is started() and finished(), or you can use isFinished() and isRunning() to query the state of the thread.

You can stop the thread by calling exit() or quit(). In extreme cases, you may want to forcibly terminate() an executing thread. However, doing so is dangerous and discouraged. Please read the documentation for terminate() and setTerminationEnabled() for detailed information.

From Qt 4.8 onwards, it is possible to deallocate objects that live in a thread that has just ended, by connecting the finished() signal to QObject::deleteLater().

$NetBSD: patch-libkface_recognition-opencv-lbph_facerec_borrowed.h,v 1.1 2015/11/03 20:28:57 markd Exp $

opencv3 support. https://bugs.kde.org/show_bug.cgi?id=349601

--- libkface/recognition-opencv-lbph/facerec_borrowed.h.orig	2015-09-03 21:22:44.000000000 +0000
+++ libkface/recognition-opencv-lbph/facerec_borrowed.h
@@ -45,7 +45,11 @@
 namespace KFaceIface
 {
 
+#if OPENCV_TEST_VERSION(3,0,0)
+class LBPHFaceRecognizer : public cv::face::FaceRecognizer
+#else
 class LBPHFaceRecognizer : public cv::FaceRecognizer
+#endif
 {
 public:
 
@@ -99,8 +103,13 @@ public:
 
     ~LBPHFaceRecognizer() {}
 
+#if OPENCV_TEST_VERSION(3,0,0)
+    using cv::face::FaceRecognizer::save;
+    using cv::face::FaceRecognizer::load;
+#else
     using cv::FaceRecognizer::save;
     using cv::FaceRecognizer::load;
+#endif
 
     static cv::Ptr<LBPHFaceRecognizer> create(int radius=1, int neighbors=8, int grid_x=8, int grid_y=8, double threshold = DBL_MAX, PredictionStatistics statistics = NearestNeighbor);
 
@@ -139,6 +148,34 @@ public:
     /**
      * Getter functions.
      */
+#if OPENCV_TEST_VERSION(3,0,0)
+
+    int getNeighbors() const                             { return m_neighbors;            }
+    void setNeighbors(int _neighbors)                    { m_neighbors = _neighbors;      }
+
+    int getRadius()    const                             { return m_radius;               }
+    void setRadius(int radius)                           { m_radius = radius;             }
+
+    int getGrid_x()    const                             { return m_grid_x;               }
+    void setGrid_x(int _grid_x)                          { m_grid_x = _grid_x;            }
+
+    int getGrid_y()    const                             { return m_grid_y;               }
+    void setGrid_y(int _grid_y)                          { m_grid_y = _grid_y;            }
+
+    double getThreshold() const                          { return m_threshold;            }
+    void setThreshold(double _threshold)                 { m_threshold = _threshold;      }
+
+    void setHistograms(std::vector<cv::Mat> _histograms) { m_histograms = _histograms;    }
+    std::vector<cv::Mat> getHistograms() const           { return m_histograms;           }
+
+    void setLabels(cv::Mat _labels)                      { m_labels = _labels;            }
+    cv::Mat getLabels() const                            { return m_labels;               }
+
+    void setStatistic(int _statistic)                    { m_statisticsMode = _statistic; }
+    int getStatistic() const                             { return m_statisticsMode;       }
+
+#else
+
     int neighbors() const { return m_neighbors; }
     int radius()    const { return m_radius;    }
     int grid_x()    const { return m_grid_x;    }
@@ -147,6 +184,8 @@ public:
     // NOTE: Implementation done through CV_INIT_ALGORITHM macro from OpenCV.
     cv::AlgorithmInfo* info() const;
 
+#endif
+
 private:
 
     /** Computes a LBPH model with images in src and
